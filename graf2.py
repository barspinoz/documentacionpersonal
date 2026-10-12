import networkx as nx
import matplotlib.pyplot as plt


class Vertice:
    def __init__(self, n):
        self.nombre = n
        self.vecinos = list()

    def agregarVecino(self, v):
        if v not in self.vecinos:
            self.vecinos.append(v)
            self.vecinos.sort()


class Grafo:
    vertices = {}

    def agregarVertice(self, vertice):
        if isinstance(vertice, Vertice) and vertice.nombre not in self.vertices:
            self.vertices[vertice.nombre] = vertice
            return True
        else:
            return False

    def agregarArista(self, u, v):
        if u in self.vertices and v in self.vertices:
            for key, value in self.vertices.items():
                if key == u:
                    value.agregarVecino(v)
                if key == v:
                    value.agregarVecino(u)
            return True
        else:
            return False

    def imprimeGrafo(self):
        for key in sorted(list(self.vertices.keys())):
            print("Vertice " + key + " Sus vecinos son " + str(self.vertices[key].vecinos))

    def dibujar(self):
        """Genera una visualización del grafo con NetworkX y Matplotlib."""
        G = nx.Graph()

        # Agregar vértices
        for nombre in self.vertices:
            G.add_node(nombre)

        # Agregar aristas (evitando duplicados)
        for nombre, vertice in self.vertices.items():
            for vecino in vertice.vecinos:
                G.add_edge(nombre, vecino)

        # Dibujar
        pos = nx.spring_layout(G, seed=42)  # Posiciones fijas para reproducibilidad
        nx.draw(
            G,
            pos,
            with_labels=True,
            node_color='lightblue',
            node_size=700,
            font_size=12,
            font_weight='bold',
            edge_color='gray'
        )
        plt.title("Grafo generado")
        plt.axis('off')
        plt.show()


class Controladora:
    def main(self):
        g = Grafo()
        a = Vertice('A')
        g.agregarVertice(a)

        for i in range(ord('A'), ord('D')):
            g.agregarVertice(Vertice(chr(i)))

        edges = ['AB', 'AC', 'BC']
        for edge in edges:
            g.agregarArista(edge[:1], edge[1:])

        g.imprimeGrafo()
        g.dibujar()   # <-- Llamada para mostrar la gráfica


obj = Controladora()
obj.main()

//
// Created by user on 10/23/25.
//

#ifndef ASSIGNMENT_2_RECURSION_IN_AN_RDF_GRAPH_MIKECODE124_MAIN_RDFOBJECT_H
#define ASSIGNMENT_2_RECURSION_IN_AN_RDF_GRAPH_MIKECODE124_MAIN_RDFOBJECT_H


class RDFOBject {
public:
    // constructors
    RDFObject();
    RDFObject(const std:string& fileName);

    // destructor
    ~RDFObject();

    // overloaded operators
    friend std::istream& operator>>(std::istream& in, RDFObject& toRead);
    friend std::ostream& operator<<(std::ostream& out, RDFObject& toWrite);

    // print all rdfobjects in nodes to file (gml format)
    void GraphPrint(const std:string& fileOut);


private:
    std::string id; // unique identifier
    std::vector<std::pair<std::string, std::string>> predicates; // predicates stores <role, object> pairs

    /*
     *  nodes <unique id, RDFobject>: (Keys: string id, Value: RDFObject pointer)
     *  a static (non-member) hashmap which contains all the RDFObjects created from file.
     */
    static std::unordered_map<std::string, RDFObject*> nodes;

};


#endif //ASSIGNMENT_2_RECURSION_IN_AN_RDF_GRAPH_MIKECODE124_MAIN_RDFOBJECT_H
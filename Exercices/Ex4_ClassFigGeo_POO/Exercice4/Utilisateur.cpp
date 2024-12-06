#include "Utilisateur.h"
#include "TriangleRectangle.h"
#include "Rectangle.h"
#include "Cercle.h"
#include <iostream>


void Utilisateur::AfficherResultats()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D40 begin
{
    switch (m_CodeFormeChoisie)
    {

    case 0:
        std::cout << "Pour un triangleRectangle base="<<Utilisateur::m_x1<<"Hauteur="<< Utilisateur::m_x1<<"surface=" << myFormesGeometriques->GetSurface() << "Perimetre=" << myFormesGeometriques->GetPerimetre();
        break;
    case 1:
        std::cout << "Pour un Rectangle largeur=" << Utilisateur::m_x1 << "surface=" << myFormesGeometriques->GetSurface() << "Perimetre=" << myFormesGeometriques->GetPerimetre();

        break;
    case 2:
        std::cout << "Pour un triangleRectangle base=" << Utilisateur::m_x1 << "surface=" << myFormesGeometriques->GetSurface() << "Perimetre=" << myFormesGeometriques->GetPerimetre();

        break;

    }
    
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D40 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

int Utilisateur::ChoisirForme(int CodeForme)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D42 begin
{
    m_CodeFormeChoisie = CodeForme;
    switch (m_CodeFormeChoisie)
    {

        case 0:
            Utilisateur::myFormesGeometriques = new TriangleRectangle;
            break;
        case 1:
            Utilisateur::myFormesGeometriques = new Rectangle;
            break;
        case 2:
            Utilisateur::myFormesGeometriques = new Cercle;
            break;

    }
    return 0;
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D42 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Utilisateur::SaisirLesParametres()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D44 begin
{
    
    switch (m_CodeFormeChoisie)
    {

    case 0:
        //m_x1 = base en centimetre 
        std::cout << "gimme base: " << std::endl;
        std::cin >> m_x1;
        //m_x2 = hauteur en centimetre 
        std::cout << "gimme hauteur: " << std::endl;
        std::cin >> m_x2;
        break;

    case 1:
        
        //m_x1 = largeur en centimetre 
        std::cout << "gimme largeur: " << std::endl;
        std::cin >> m_x1;
        //m_x2 = hauteur en centimetre 
        std::cout << "gimme hauteur: " << std::endl;
        std::cin >> m_x2;
        break;
    case 2:
   
        //m_x1 = diametre en centimetre 
        std::cout << "gimme diameter: " << std::endl;
        std::cin >> m_x1;
        m_x2 =0;
        break;

    }

    
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D44 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Utilisateur::ExecuterLesCalculs()
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D47 begin
{
    Utilisateur::myFormesGeometriques->CalculerPerimetre(Utilisateur::m_x1,Utilisateur::m_x2);
    Utilisateur::myFormesGeometriques->CalculerSurface(Utilisateur::m_x1, Utilisateur::m_x2);
    
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D47 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

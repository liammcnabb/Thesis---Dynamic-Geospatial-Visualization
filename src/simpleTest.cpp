int HelloWorld::main( )
{
    Point p( 0.0f, 0.0f );
    LineSegment ls( Point( 10.0f,-10.0f ), Point( -10.0f, 10.0f );

    if( IntersectionTester::isIntersecting( p, ls ) )
        std::cout << "Intersect at" <<
            IntersectionTester::closestPoint(ls,p).toString();
    
    return 0;
}

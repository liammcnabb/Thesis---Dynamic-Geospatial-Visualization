Point IntersectTester::closestPoint(LineSegment ls, Point c)
{
    Point p1 = ls.getStart();
    Point p2 = ls.getEnd();
    Point p3 = c;

    float distX = (p1.getX() - p2.getX());
    float distY = (p1.getY() - p2.getY());

    float len = sqrt( ( distX * distX ) + ( distY * distY ) );
    float dot = ( dotProduct( p3, p1, p2 ) ) / ( len * len );

    float closestX = p1.getX() + ( dot * fabs( p2.getX() - p1.getX() ) );
    float closestY = p1.getY() + ( dot * fabs( p2.getY() - p1.getY() ) );
    return Point( closestX, closestY );
}

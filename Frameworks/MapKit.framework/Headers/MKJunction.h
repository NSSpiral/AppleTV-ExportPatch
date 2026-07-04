/* Runtime dump - MKJunction
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKJunction : NSObject
{
    struct ? * _elements;
    unsigned long _count;
    int _type;
    id _snapped;
}

@property (readonly, nonatomic) int type;

- (MKJunction *)initWithType:(int)arg0 maneuver:(int)arg1 drivingSide:(int)arg2 elements:(struct ? *)arg3 count:(unsigned long)arg4;
- (void)getArrowPath:(id *)arg0 arrowStrokePath:(id *)arg1 intersectionBackgroundPath:(id *)arg2 strokePath:(id *)arg3 withSize:(struct CGSize)arg4 metrics:(struct ?)arg5 drivingSide:(float)arg6 visualCenter:(float)arg7;
- (void)getRoundaboutArrowPath:(id *)arg0 intersectionBackgroundPath:(id *)arg1 strokePath:(id *)arg2 withSize:(struct CGSize)arg3 metrics:(struct ?)arg4 drivingSide:(float)arg5 visualCenter:(float)arg6;
- (void)getArrowPath:(id *)arg0 arrowStrokePath:(id *)arg1 pivot:(struct CGPoint *)arg2 withSize:(struct CGSize)arg3 metrics:(struct ?)arg4 visualCenter:(float)arg5;
- (NSObject *)roundaboutArrowWithSize:(struct CGSize)arg0 metrics:(struct ?)arg1 outerRadius:(float)arg2 endAngle:(float)arg3 pivot:(float)arg4;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)type;

@end

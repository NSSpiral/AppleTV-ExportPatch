/* Runtime dump - MKMultiPoint
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPoint : MKShape
{
    struct ? * _points;
    unsigned int _pointCount;
    struct ? _boundingRect;
}

@property (readonly, nonatomic) unsigned int pointCount;

- (void)_assignPoints:(struct ? *)arg0 count:(unsigned int)arg1;
- (struct ?)boundingMapRect;
- (char)intersectsMapRect:(struct ?)arg0;
- (void)_setPoints:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)_setCoordinates:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)_setBounds:(struct ?)arg0;
- (void)_calculateBounds;
- (void)getCoordinates:(struct ? *)arg0 range:(struct _NSRange)arg1;
- (void)dealloc;
- (struct ?)coordinate;
- (struct ? *)points;
- (unsigned int)pointCount;

@end

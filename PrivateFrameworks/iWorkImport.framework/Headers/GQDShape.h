/* Runtime dump - GQDShape
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDShape : GQDGraphic <GQDNameMappable>
{
    GQDPath * mPath;
    GQDWPLayoutFrame * mLayoutFrame;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (struct CGPath *)createBezierPath;
- (NSObject *)layoutFrame;
- (char)isRectangularAndAxisAlignedToAngle:(float)arg0;
- (GQDShape *)initWithGraphic:(OAXGraphic *)arg0 path:(NSString *)arg1 geometry:(TSDInfoGeometry *)arg2;
- (void)dealloc;
- (NSString *)path;
- (char)isBlank;

@end

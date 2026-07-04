/* Runtime dump - ODICycle5
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODICycle5 : ODICycle

+ (float)normalizedAngle:(float)arg0;
+ (char)map1NodeWithState:(NSObject *)arg0;
+ (char)map2NodeWithState:(NSObject *)arg0;
+ (struct CGRect)mapGSpaceWithState:(NSObject *)arg0;
+ (void)mapNode:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (void)mapTransition:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (struct CGSize)nodeSizeWithState:(NSObject *)arg0;
+ (void)addShapeForNode:(NSObject *)arg0 relativeBounds:(struct CGRect)arg1 state:(struct CGSize)arg2;
+ (void)mapStyleForTransition:(NSObject *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (float)intersectionAngleNextToAngle:(float)arg0 isAfter:(char)arg1 state:(NSObject *)arg2;
+ (void)addShapeForTransition:(NSObject *)arg0 startAngle:(float)arg1 endAngle:(float)arg2 state:(NSObject *)arg3;

@end

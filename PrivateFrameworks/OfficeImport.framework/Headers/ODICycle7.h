/* Runtime dump - ODICycle7
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODICycle7 : ODICycle

+ (char)map1NodeWithState:(NSObject *)arg0;
+ (char)map2NodeWithState:(NSObject *)arg0;
+ (struct CGRect)mapGSpaceWithState:(NSObject *)arg0;
+ (void)mapNode:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (void)mapTransition:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (struct CGSize)nodeSizeWithState:(NSObject *)arg0;
+ (void)addShapeForNode:(NSObject *)arg0 relativeBounds:(struct CGRect)arg1 state:(struct CGSize)arg2;
+ (void)addShapeForTransition:(NSObject *)arg0 relativeBounds:(struct CGRect)arg1 rotation:(struct CGSize)arg2 state:(NSObject *)arg3;

@end

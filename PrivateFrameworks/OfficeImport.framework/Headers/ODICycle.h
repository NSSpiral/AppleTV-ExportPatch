/* Runtime dump - ODICycle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODICycle : NSObject

+ (void)mapWithState:(NSObject *)arg0;
+ (unsigned int)nodeCountWithState:(NSObject *)arg0;
+ (char)map1NodeWithState:(NSObject *)arg0;
+ (char)map2NodeWithState:(NSObject *)arg0;
+ (struct CGRect)mapGSpaceWithState:(NSObject *)arg0;
+ (void)mapNode:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (void)mapTransition:(NSObject *)arg0 index:(unsigned int)arg1 state:(NSObject *)arg2;
+ (struct CGSize)nodeSizeWithState:(NSObject *)arg0;
+ (struct CGRect)boundingBoxWithIsTight:(id)arg0 state:(SEL)arg1;
+ (struct CGRect)nodeBoundsWithIndex:(NSObject *)arg0 state:(SEL)arg1;
+ (char)mapIdentifier:(NSString *)arg0 state:(NSObject *)arg1;

@end

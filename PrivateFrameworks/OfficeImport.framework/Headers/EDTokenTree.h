/* Runtime dump - EDTokenTree
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTokenTree : NSObject

+ (NSObject *)buildSubtreeAtIndex:(unsigned int *)arg0 formula:(EDArrayedFormula *)arg1;
+ (EDTokenTree *)buildSubtree:(unsigned int)arg0 formula:(EDArrayedFormula *)arg1;
+ (unsigned int)childCountForToken:(unsigned int)arg0 formula:(EDArrayedFormula *)arg1;
+ (BOOL)isTokenNoOp:(unsigned int)arg0 formula:(EDArrayedFormula *)arg1;
+ (BOOL)isTokenAttrASum:(unsigned short)arg0;

@end

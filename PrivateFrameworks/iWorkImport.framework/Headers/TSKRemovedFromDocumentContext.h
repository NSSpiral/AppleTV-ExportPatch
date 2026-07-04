/* Runtime dump - TSKRemovedFromDocumentContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKRemovedFromDocumentContext : NSObject

+ (NSString *)movingContext;
+ (NSString *)hidingContext;

- (char)wasMoved;
- (NSString *)undoContext;
- (char)wasHidden;

@end

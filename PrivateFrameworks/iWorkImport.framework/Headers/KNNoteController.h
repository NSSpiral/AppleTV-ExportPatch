/* Runtime dump - KNNoteController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteController : NSObject

+ (NSObject *)noteSearchTargetForSlideNode:(NSObject *)arg0;
+ (char)isNoteSearchTarget:(NSObject *)arg0;
+ (char)isNoteAtRootSearchTargetIndex:(unsigned int)arg0;
+ (unsigned int)slideNodeIndexForRootSearchTargetIndex:(unsigned int)arg0;
+ (unsigned int)rootSearchTargetIndexForSlideNodeIndex:(unsigned int)arg0 isEditingNote:(char)arg1;
+ (NSObject *)slideNodeForNoteSearchTarget:(NSObject *)arg0;

@end

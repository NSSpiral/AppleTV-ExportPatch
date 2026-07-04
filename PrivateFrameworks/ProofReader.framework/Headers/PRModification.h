/* Runtime dump - PRModification
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRModification : NSObject

- (NSString *)replacementString;
- (struct _NSRange)range;
- (unsigned int)modificationType;
- (struct _NSRange)syllableRange;
- (double)modificationScore;
- (struct _NSRange)additionalSyllableRange;

@end

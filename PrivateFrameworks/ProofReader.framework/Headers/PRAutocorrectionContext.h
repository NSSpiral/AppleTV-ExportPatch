/* Runtime dump - PRAutocorrectionContext
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRAutocorrectionContext : NSObject

+ (NSObject *)autocorrectionContextOfType:(unsigned int)arg0;

- (void)reset;
- (id)currentModifications;
- (void)addInputCharacter:(unsigned short)arg0 geometryData:(NSData *)arg1;
- (double)validSequenceCorrectionThreshold;
- (void)addInputCharacter:(unsigned short)arg0 geometryModel:(void *)arg1 geometryData:(NSData *)arg2;
- (NSMutableArray *)prefixes;
- (void)setValidSequenceCorrectionThreshold:(double)arg0;
- (NSMutableArray *)removedModifications;
- (NSMutableArray *)addedModifications;

@end

/* Runtime dump - TIKeyboardCandidateGroup
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _title;
    NSOrderedSet * _candidates;
    NSArray * _nonExtensionCandidates;
}

@property (copy) NSString * title;
@property (copy) NSOrderedSet * candidates;
@property (retain) NSArray * nonExtensionCandidates;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardCandidateGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (TIKeyboardCandidateGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)sortUsingComparator:(id /* block */)arg0;
- (NSOrderedSet *)candidates;
- (TIKeyboardCandidateGroup *)initWithTitle:(NSString *)arg0 candidates:(NSOrderedSet *)arg1;
- (void)setCandidates:(NSOrderedSet *)arg0;
- (void)sortWithOptions:(unsigned int)arg0 usingComparator:(id /* block */)arg1;
- (char)hasAlternativeText;
- (NSArray *)nonExtensionCandidates;
- (id)mutableCandidates;
- (void)setNonExtensionCandidates:(NSArray *)arg0;
- (void)addCandidate:(NSDate *)arg0;

@end

/* Runtime dump - TILexicon
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TILexicon : NSObject <NSCopying, NSSecureCoding>
{
    NSArray * _entries;
}

@property (readonly, nonatomic) NSArray * entries;

+ (char)supportsSecureCoding;
+ (void)requestLexiconFromBundlePath:(NSString *)arg0 completionHandler:(id /* block */)arg1;
+ (NSArray *)lexiconWithEntries:(NSArray *)arg0;

- (void)dealloc;
- (TILexicon *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (TILexicon *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)entries;

@end

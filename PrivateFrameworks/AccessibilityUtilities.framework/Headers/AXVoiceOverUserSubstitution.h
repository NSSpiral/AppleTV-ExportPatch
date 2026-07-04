/* Runtime dump - AXVoiceOverUserSubstitution
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverUserSubstitution : NSObject <NSSecureCoding, NSCopying>
{
    char _active;
    char _ignoreCase;
    char _appliesToAllApps;
    char _isReplacementTextAllPunctuation;
    char _isReplacementTextSurroundedByPunctuation;
    NSString * _originalString;
    NSString * _replacementString;
    NSSet * _bundleIdentifiers;
    NSUUID * _uuid;
}

@property (copy, nonatomic) NSString * originalString;
@property (copy, nonatomic) NSString * replacementString;
@property (nonatomic) char active;
@property (nonatomic) char ignoreCase;
@property (nonatomic) char appliesToAllApps;
@property (copy, nonatomic) NSSet * bundleIdentifiers;
@property (readonly, nonatomic) char isReplacementTextAllPunctuation;
@property (readonly, nonatomic) char isReplacementTextSurroundedByPunctuation;
@property (retain, nonatomic) NSUUID * uuid;

+ (char)supportsSecureCoding;

- (NSString *)replacementString;
- (void)dealloc;
- (AXVoiceOverUserSubstitution *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AXVoiceOverUserSubstitution *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (AXVoiceOverUserSubstitution *)copyWithZone:(struct _NSZone *)arg0;
- (char)active;
- (void)setActive:(char)arg0;
- (NSUUID *)uuid;
- (void)setIgnoreCase:(char)arg0;
- (void)setAppliesToAllApps:(char)arg0;
- (void)setOriginalString:(NSString *)arg0;
- (void)setReplacementString:(NSString *)arg0;
- (NSString *)originalString;
- (char)ignoreCase;
- (char)appliesToAllApps;
- (char)isReplacementTextAllPunctuation;
- (char)isReplacementTextSurroundedByPunctuation;
- (NSSet *)bundleIdentifiers;
- (void)setUuid:(NSUUID *)arg0;
- (void)setBundleIdentifiers:(NSSet *)arg0;

@end

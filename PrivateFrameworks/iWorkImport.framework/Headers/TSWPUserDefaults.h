/* Runtime dump - TSWPUserDefaults
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPUserDefaults : NSObject

+ (void)registerUserDefaults:(char)arg0;
+ (UIColor *)invisiblesColor;
+ (void)setAutomaticallyDetectLinks:(char)arg0;
+ (void)setAutomaticallyDetectLists:(char)arg0;
+ (void)setSuperscriptNumericalSuffixes:(char)arg0;
+ (void)setSpellCheckingEnabled:(char)arg0;
+ (char)p_UserDefaultSet:(NSSet *)arg0 force:(char)arg1;
+ (char)automaticallyDetectLinks;
+ (char)automaticallyDetectLists;
+ (char)superscriptNumericalSuffixes;
+ (char)spellCheckingEnabled;
+ (void)setInvisiblesColor:(UIColor *)arg0;

@end

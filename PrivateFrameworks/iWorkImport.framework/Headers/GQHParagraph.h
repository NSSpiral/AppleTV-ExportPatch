/* Runtime dump - GQHParagraph
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHParagraph : NSObject

+ (int)handleParagraph:(id)arg0 state:(NSObject *)arg1 bulletStates:(struct __CFDictionary *)arg2 isMultiColumn:(char)arg3;
+ (int)mapParagraphStyle:(NSObject *)arg0 paragraph:(CPParagraph *)arg1 state:(NSObject *)arg2 bulletStates:(struct __CFDictionary *)arg3 isMultiColumn:(char)arg4;
+ (int)handleInlineList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (int)handleLink:(id)arg0 state:(NSObject *)arg1;
+ (int)handleBookmark:(id)arg0 state:(NSObject *)arg1;
+ (NSObject *)getBulletStyle:(NSObject *)arg0 level:(int)arg1;
+ (char)retrieveFontSizeForFirstCharacter:(id)arg0 fontSize:(float *)arg1;
+ (char)setupBulletStatesForParagraphStyle:(NSObject *)arg0 paragraph:(CPParagraph *)arg1 state:(NSObject *)arg2 bulletStates:(struct __CFDictionary *)arg3;
+ (struct __CFDictionary *)prepareBullet:(id)arg0 paragraph:(CPParagraph *)arg1 style:(NSObject *)arg2 state:(NSObject *)arg3 bulletStates:(struct __CFDictionary *)arg4 showBullet:(char)arg5;
+ (void)mapBullet:(struct __CFDictionary *)arg0 state:(NSObject *)arg1;

@end

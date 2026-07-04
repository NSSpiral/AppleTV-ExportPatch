/* Runtime dump - GQHTextSpan
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextSpan : NSObject

+ (int)handlePageStart:(id)arg0 state:(NSObject *)arg1;
+ (int)handleContainerHint:(id)arg0 state:(NSObject *)arg1;
+ (int)nonWhitespaceCount:(struct __CFArray *)arg0;
+ (int)handleSpan:(id)arg0 checkForTrailingBlanks:(char)arg1 state:(NSObject *)arg2;
+ (int)handleTextBackgroundForStyle:(NSObject *)arg0 destStyle:(NSObject *)arg1 state:(NSObject *)arg2;
+ (int)handleTextListChild:(NSObject *)arg0 outputBlanks:(char)arg1 state:(NSObject *)arg2;
+ (int)handleTextList:(NSArray *)arg0 checkForTrailingBlanks:(char)arg1 state:(NSObject *)arg2;
+ (int)handleTextMarker:(NSObject *)arg0 outputBlanks:(char)arg1 state:(NSObject *)arg2;
+ (int)handleAutoNumber:(NSNumber *)arg0 state:(NSObject *)arg1;
+ (int)handleAttachment:(NSObject *)arg0 state:(NSObject *)arg1;

@end

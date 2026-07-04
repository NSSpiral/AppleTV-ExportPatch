/* Runtime dump - ODIText
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIText : NSObject

+ (void)mapTextFromPoint:(NSObject *)arg0 toShape:(struct _xmlNode *)arg1 isCentered:(char)arg2 includeChildren:(char)arg3 state:(NSObject *)arg4;
+ (void)mapTextFromPoint:(NSObject *)arg0 toShape:(struct _xmlNode *)arg1 isCenteredHorizontally:(char)arg2 isCenteredVertically:(char)arg3 includeChildren:(char)arg4 state:(NSObject *)arg5;
+ (NSObject *)baseListStyleForPoint:(NSObject *)arg0 shape:(NSString *)arg1 isCentered:(char)arg2 state:(NSObject *)arg3;
+ (void)addTextFromPoint:(NSObject *)arg0 level:(unsigned int)arg1 includeChildren:(char)arg2 toShape:(struct _xmlNode *)arg3 baseListStyle:(NSObject *)arg4 state:(NSObject *)arg5;

@end

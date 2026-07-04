/* Runtime dump - ODXChoose
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODXChoose : NSObject

+ (void)readIfNode:(struct _xmlNode *)arg0 toChoose:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readElseNode:(struct _xmlNode *)arg0 toChoose:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readNode:(struct _xmlNode *)arg0 toChoose:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

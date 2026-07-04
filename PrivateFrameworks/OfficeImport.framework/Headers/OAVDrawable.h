/* Runtime dump - OAVDrawable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVDrawable : NSObject

+ (NSObject *)readDrawableFromNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (struct _xmlDoc *)vmlDocumentFromPart:(struct _xmlNode *)arg0;
+ (void)readFromDrawable:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)readDrawablesFromParent:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (struct CGRect)readCoordBounds:(id)arg0;

@end

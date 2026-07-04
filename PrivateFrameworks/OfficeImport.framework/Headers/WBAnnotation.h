/* Runtime dump - WBAnnotation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBAnnotation : NSObject

+ (unsigned int)findStartFrom:(NSObject *)arg0 annotation:(struct WrdAnnotation *)arg1;
+ (void)readFrom:(NSObject *)arg0 at:(int)arg1 paragraph:(CPParagraph *)arg2;
+ (NSObject *)readRangedFrom:(NSObject *)arg0 index:(unsigned int)arg1 type:(int)arg2 paragraph:(CPParagraph *)arg3;

@end

/* Runtime dump - GQDWPText
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPText : NSObject
{
    char * mContent;
}

- (void)dealloc;
- (char *)content;
- (GQDWPText *)initWithContent:(char *)arg0;
- (char)isBlank;

@end

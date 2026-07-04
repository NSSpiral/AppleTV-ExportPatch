/* Runtime dump - GQDWPTextLabel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPTextLabel : NSObject
{
    struct __CFString * mFormat;
    int mLabelType;
    int mFirst;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (int)labelType;
- (void)dealloc;
- (int)first;
- (struct __CFString *)format;

@end

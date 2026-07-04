/* Runtime dump - GQDTTextCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTTextCell : GQDTCell
{
    struct __CFString * mStringValue;
    GQDWPLayoutStorage * mLayoutStorage;
}

- (int)readContentForTextCell:(struct _xmlTextReader *)arg0;
- (int)readContentForTCell:(struct _xmlTextReader *)arg0;
- (id)layoutStorage;
- (void)dealloc;
- (struct __CFString *)stringValue;

@end

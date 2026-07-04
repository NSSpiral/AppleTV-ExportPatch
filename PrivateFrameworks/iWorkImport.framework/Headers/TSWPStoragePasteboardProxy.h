/* Runtime dump - TSWPStoragePasteboardProxy
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStoragePasteboardProxy : TSPObject
{
    TSWPStorage * _storage;
    struct _NSRange _range;
    <TSWPStyleProvider> * _styleProvider;
}

@property (readonly, nonatomic) struct _NSRange storageRange;

- (void)saveToArchiver:(NSObject *)arg0;
- (TSWPStoragePasteboardProxy *)initWithContext:(NSObject *)arg0 storage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2 styleProvider:(<TSWPStyleProvider> *)arg3;
- (struct _NSRange)storageRange;
- (void)dealloc;
- (void).cxx_construct;

@end

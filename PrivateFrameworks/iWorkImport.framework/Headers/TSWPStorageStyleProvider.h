/* Runtime dump - TSWPStorageStyleProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char supportsBoldItalicUnderlineShortcuts;

+ (TSWPStorageStyleProvider *)styleProviderForStorage:(id)arg0;

- (NSObject *)paragraphStyleAtParIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;

@end

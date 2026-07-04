/* Runtime dump - GQPProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPProcessor : NSObject
{
    struct _xmlTextReader * mReader;
    struct _xmlParserInputBuffer * mParserInputBuffer;
    SFUZipArchive * mArchive;
    SFUCryptoKey * mCryptoKey;
    unsigned long long mTotalBytesToConsume;
    SFUZipInflateInputStream * mInputStream;
    struct stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > > * mStateStack;
    struct stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > > * mActionStack;
    GQSDocument * mDocumentState;
    struct __QLPreviewRequest * mOutputPreviewRequest;
    struct __CFBundle * mBundle;
    struct CGSize mThumbnailSize;
    char mWrongFormat;
    unsigned char mIsProgressive;
}

+ (struct _xmlTextReader *)createXmlReaderWithPath:(NSString *)arg0 indexFileName:(NSString *)arg1 cryptoKey:(SFUCryptoKey *)arg2;
+ (struct _xmlTextReader *)createXmlReaderWithZipArchive:(NSString *)arg0 indexFileName:(NSString *)arg1 cryptoKey:(SFUCryptoKey *)arg2 indexEntry:(id *)arg3 zipInputStream:(id *)arg4;
+ (void)initialize;

- (void)setWrongFormat:(char)arg0;
- (GQPProcessor *)initWithPath:(NSString *)arg0 indexFileName:(NSString *)arg1 previewRequest:(struct __QLPreviewRequest *)arg2 cryptoKey:(SFUCryptoKey *)arg3;
- (GQPProcessor *)initWithZipArchive:(NSString *)arg0 indexFileName:(NSString *)arg1 previewRequest:(struct __QLPreviewRequest *)arg2 cryptoKey:(SFUCryptoKey *)arg3;
- (char)go;
- (void)pushInitialState;
- (struct stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > > *)actionStack;
- (GQPProcessor *)initWithZipArchive:(NSString *)arg0 indexFileName:(NSString *)arg1 previewRequest:(struct __QLPreviewRequest *)arg2;
- (SFUCryptoKey *)cryptoKey;
- (void)setProgressiveMode:(unsigned char)arg0;
- (char)isWrongFormat;
- (void)dealloc;
- (TIDocumentState *)documentState;
- (struct __CFBundle *)bundle;
- (void).cxx_construct;
- (void)setBundle:(struct __CFBundle *)arg0;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailSize:(struct CGSize)arg0;
- (struct stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > > *)stateStack;
- (QLZipArchive *)archive;

@end

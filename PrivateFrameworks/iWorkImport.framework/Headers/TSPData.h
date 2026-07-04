/* Runtime dump - TSPData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPData : NSObject <TSPSplitableData>
{
    int _didCull;
    long long _identifier;
    TSPDigest * _digest;
    NSObject<OS_dispatch_queue> * _accessQueue;
    <TSPDataStorage> * _storage;
    NSString * _filename;
    TSPDataAttributes * _attributes;
    char _isDeallocating;
    TSPDataManager * _manager;
}

@property (nonatomic) char acknowledgedByServer;
@property (copy) TSPDataAttributes * attributes;
@property (readonly, nonatomic) NSString * filename;
@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) char isReadable;
@property (readonly, nonatomic) char isApplicationData;
@property (readonly, nonatomic) char isExternalData;
@property (readonly, nonatomic) char isEncrypted;
@property (readonly, nonatomic) NSString * documentResourceLocator;
@property (readonly, nonatomic) NSString * packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) TSPObjectContext * context;
@property (readonly, nonatomic) TSPDigest * digest;
@property (readonly, nonatomic) NSString * digestString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) char needsDownload;
@property (readonly, weak, nonatomic) TSPDataManager * manager;
@property (readonly, nonatomic) long long identifier;
@property (retain, nonatomic) <TSPDataStorage> * storage;
@property (readonly, nonatomic) unsigned long long lengthIfLocal;
@property (readonly, nonatomic) unsigned long long encodedLengthIfLocal;
@property (copy, nonatomic) TSPDataAttributes * unsafeAttributes;
@property (readonly, nonatomic) char gilligan_isRemote;

+ (NSObject *)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 context:(TSPObjectContext *)arg2;
+ (NSURL *)dataFromURL:(NSURL *)arg0 useExternalReferenceIfAllowed:(char)arg1 context:(TSPObjectContext *)arg2;
+ (NSURL *)dataFromURL:(NSURL *)arg0 useExternalReferenceIfAllowed:(char)arg1 useFileCoordination:(char)arg2 context:(TSPObjectContext *)arg3;
+ (NSURL *)dataFromURL:(NSURL *)arg0 useExternalReferenceIfAllowed:(char)arg1 useFileCoordination:(char)arg2 filename:(NSString *)arg3 context:(TSPObjectContext *)arg4;
+ (NSOperationQueue *)cullingListenersQueue;
+ (TSPData *)cullingListeners;
+ (NSDictionary *)requiredAVAssetOptions;
+ (char)writeStorage:(id)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
+ (NSURL *)dataFromURL:(NSURL *)arg0 context:(TSPObjectContext *)arg1;
+ (NSData *)dataFromNSData:(NSData *)arg0 filename:(NSString *)arg1 context:(TSPObjectContext *)arg2;
+ (NSObject *)dataFromDataRep:(NSObject *)arg0 filename:(NSString *)arg1 context:(TSPObjectContext *)arg2;
+ (NSURL *)readOnlyDataFromURL:(NSURL *)arg0;
+ (NSData *)readOnlyDataFromNSData:(NSData *)arg0 filename:(NSString *)arg1;
+ (void)addCullingListener:(id)arg0;
+ (void)removeCullingListener:(id)arg0;
+ (void)dataForAssetsLibraryURL:(NSURL *)arg0 context:(TSPObjectContext *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
+ (NSString *)pasteboardTypeForIdentifier:(long long)arg0;
+ (void)temporaryNSDataWithPattern4:(char *)arg0 accessor:(TSCH3DScenePropertyAccessor *)arg1;
+ (NSObject *)digestForDataWithPattern4:(char *)arg0;
+ (NSObject *)dataWithPattern4:(char *)arg0 filename:(NSString *)arg1 context:(TSPObjectContext *)arg2;
+ (NSObject *)digestStringForDataWithPattern4:(char *)arg0;
+ (TSPData *)null;

- (char)needsDownload;
- (NSString *)packageLocator;
- (unsigned long long)encodedLengthIfLocal;
- (unsigned char)packageIdentifier;
- (NSString *)digestString;
- (void)willCull;
- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (char)isStorageInPackage:(id)arg0;
- (char)gilligan_isRemote;
- (void)setStorage:(<TSPDataStorage> *)arg0;
- (void)setFilename:(NSString *)arg0 storage:(<TSPDataStorage> *)arg1;
- (TSPData *)initWithIdentifier:(long long)arg0 digest:(TSPDigest *)arg1 filename:(NSString *)arg2 storage:(<TSPDataStorage> *)arg3 manager:(TSPDataManager *)arg4;
- (void)setUnsafeAttributes:(TSPDataAttributes *)arg0;
- (char)isApplicationData;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (NSDictionary *)AVAssetWithOptions:(NSDictionary *)arg0;
- (NSString *)documentResourceLocator;
- (NSData *)NSData;
- (void)archiveInfoMessage:(struct DataInfo *)arg0 archiver:(NSObject *)arg1;
- (char)bookmarkDataNeedsWrite;
- (struct CGImage *)newCGImage;
- (char)isExternalData;
- (NSString *)copyWithContext:(TSPObjectContext *)arg0;
- (void)performInputStreamReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (void)addDownloadObserver:(NSObject *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)lengthIfLocal;
- (char)isLengthLikelyToBeGreaterThan:(unsigned long long)arg0;
- (TSPDataAttributes *)unsafeAttributes;
- (void)tsp_splitDataWithMaxSize:(unsigned long)arg0 subdataHandlerBlock:(id /* block */)arg1;
- (char)isAcknowledgedByServer;
- (void)setAcknowledgedByServer:(char)arg0;
- (NSString *)pasteboardType;
- (void)tsk_addDownloadObserver:(NSObject *)arg0 lockMode:(int)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (TSPDigest *)digest;
- (NSString *)preferredFilename;
- (char)writeToURL:(NSURL *)arg0 error:(id *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned long long)length;
- (long long)identifier;
- (NSString *)type;
- (UIImage *)UIImage;
- (TSPObjectContext *)context;
- (TSPDataAttributes *)attributes;
- (void).cxx_destruct;
- (void)setAttributes:(TSPDataAttributes *)arg0;
- (AVURLAsset *)AVAsset;
- (NSString *)filename;
- (TSPDataManager *)manager;
- (NSData *)bookmarkData;
- (<TSPDataStorage> *)storage;
- (char)isEncrypted;
- (char)isReadable;
- (unsigned long long)encodedLength;

@end

/* Runtime dump - TSDImageProviderPool
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener>
{
    TSUPointerKeyDictionary * mImageDataToImageProviderMap;
    unsigned int mOpenFileDescriptorLimit;
    char mHaveRaisedFileDescriptorLimit;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)p_providerClassForData:(NSData *)arg0 validateLength:(char)arg1;
+ (Class)p_providerClassForData:(NSData *)arg0;
+ (TSDImageProviderPool *)allocWithZone:(struct _NSZone *)arg0;
+ (TSDImageProviderPool *)sharedPool;
+ (TSDImageProviderPool *)_singletonAlloc;

- (void)willCullData:(NSData *)arg0;
- (void)addInterestInProviderForData:(NSData *)arg0;
- (void)removeInterestInProviderForData:(NSData *)arg0;
- (NSData *)providerForData:(NSData *)arg0 shouldValidate:(char)arg1;
- (NSData *)temporaryProviderForData:(NSData *)arg0 shouldValidate:(char)arg1;
- (void)p_updateFileDescriptorLimit;
- (void)p_didReceiveMemoryWarning:(id)arg0;
- (NSData *)p_providerForData:(NSData *)arg0 temporary:(char)arg1 shouldValidate:(char)arg2;
- (unsigned int)p_providerLimitForFileDescriptorLimit:(unsigned int)arg0;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned int)arg0;
- (unsigned int)p_removeProvidersWithZeroInterest;
- (char)isBitmapData:(NSData *)arg0;
- (void)willCloseDocumentContext:(NSObject *)arg0;
- (void)flushImageProviders;
- (TSDImageProviderPool *)retain;
- (void)release;
- (void)dealloc;
- (TSDImageProviderPool *)init;
- (TSDImageProviderPool *)autorelease;
- (unsigned int)retainCount;
- (TSDImageProviderPool *)copyWithZone:(struct _NSZone *)arg0;

@end

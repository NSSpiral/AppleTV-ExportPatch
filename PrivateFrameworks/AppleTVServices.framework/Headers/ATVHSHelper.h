/* Runtime dump - ATVHSHelper
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSHelper : NSObject

+ (char *)dataPtrForCode:(unsigned long)arg0 data:(char *)arg1 length:(unsigned int)arg2 ptrDataSize:(unsigned int *)arg3;
+ (void)initializeWithFairPlaySAPEncrypter:(id)arg0;
+ (unsigned long)unsignedIntValue:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)encryptData:(NSData *)arg0 dataClient:(ATVDataClient *)arg1;
+ (float)float32Value:(char *)arg0 length:(unsigned int)arg1;
+ (ATVHSHelper *)intNumberValue:(char *)arg0 length:(unsigned int)arg1;
+ (ATVHSHelper *)fpHeaderWithURLStr:(NSString *)arg0 withHSClient:(NSObject *)arg1;
+ (ATVHSHelper *)securedURLWithURLStr:(NSString *)arg0 withHSClient:(NSObject *)arg1;

@end

/* Runtime dump - GEOPhoneNumberMUIDMapper
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberMUIDMapper : NSObject
{
    NSObject<OS_dispatch_queue> * _writeQ;
    NSMutableArray * _uniquePhoneNumbers;
    NSMutableDictionary * _phoneNumberMuidMapping;
    NSString * _filePath;
}

- (void)dealloc;
- (void)_save;
- (GEOPhoneNumberMUIDMapper *)initWithMappingFilePath:(NSString *)arg0;
- (char)getMuid:(unsigned long long *)arg0 providerId:(unsigned long long)arg1 forPhoneNumber:(int *)arg2;
- (void)setMuid:(unsigned long long)arg0 providerId:(int)arg1 forPhoneNumber:(unsigned long long)arg2;
- (void)_pruneToSize:(unsigned int)arg0;

@end

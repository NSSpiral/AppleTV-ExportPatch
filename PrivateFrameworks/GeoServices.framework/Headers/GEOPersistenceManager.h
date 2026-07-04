/* Runtime dump - GEOPersistenceManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPersistenceManager : NSObject

+ (char)phoneNumberMuidMappingFileExistsAtPath:(NSString *)arg0;
+ (char)readPhoneNumberMuidMapping:(id *)arg0 uniquePhoneNumbers:(id *)arg1 version:(id *)arg2 atPath:(NSString *)arg3 error:(id *)arg4;
+ (char)writePhoneNumberMuidMappingForMapping:(id)arg0 uniquePhoneNumbers:(NSMutableArray *)arg1 toPath:(NSString *)arg2 error:(id *)arg3;
+ (char)readPhoneNumberMuidMapping:(id *)arg0 uniquePhoneNumbers:(id *)arg1 atPath:(NSString *)arg2 error:(id *)arg3;
+ (char)createMuidMappingDirectoryForPath:(NSString *)arg0 WithError:(id *)arg1;

@end

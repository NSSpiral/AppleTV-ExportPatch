/* Runtime dump - BRITunesLibraryUtilitiesAccess
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol BRITunesUtilities;
@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities>
{
    <BRITunesUtilities> * _utilitiesDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRITunesLibraryUtilitiesAccess *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)setITunesUtilitiesDelegate:(NSObject *)arg0;
- (void)importKeybagData:(NSData *)arg0 forDSID:(NSNumber *)arg1;
- (void)deleteImportedKeybagData;
- (char)attemptAuthorizationForAsset:(id /* <BRMediaAsset> */)arg0 error:(id *)arg1;
- (void)deauthorizeAssetIfNecessary:(id /* <BRMediaAsset> */)arg0;
- (NSSortDescriptor *)iTunesCompareAscending:(char)arg0 withKey:(NSString *)arg1;
- (NSString *)sortStringForString:(NSString *)arg0;
- (int)iTunesCompareString:(NSString *)arg0 toString:(NSString *)arg1;
- (NSURL *)urlSuitableForPlayback:(NSURL *)arg0;
- (unsigned long)randomPlaylistIndex:(unsigned long)arg0;
- (NSString *)keyBagPathForMachineID:(unsigned long long)arg0;
- (NSString *)rentalGUID;
- (id)iTunesCompareAscending:(char)arg0 withKey:(NSString *)arg1 fallbackSortSelector:(SEL)arg2;
- (void).cxx_destruct;

@end

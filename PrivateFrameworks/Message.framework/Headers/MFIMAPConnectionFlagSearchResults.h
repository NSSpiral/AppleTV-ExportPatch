/* Runtime dump - MFIMAPConnectionFlagSearchResults
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPConnectionFlagSearchResults : NSObject
{
    NSMutableDictionary * _uidsWithFlagMaskSet;
    NSMutableDictionary * _uidsWithoutFlagMaskSet;
}

- (void)dealloc;
- (MFIMAPConnectionFlagSearchResults *)init;
- (NSString *)description;
- (void)cacheStateForUIDs:(id)arg0 mask:(unsigned long long)arg1 existenceSetsFlag:(char)arg2;
- (id)copyResponseForUID:(unsigned int)arg0;
- (id)_indexSetFromUIDs:(id)arg0;
- (unsigned long long)_flagsForUID:(unsigned int)arg0;

@end

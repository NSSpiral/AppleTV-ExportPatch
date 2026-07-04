/* Runtime dump - CHPhoneBookIOSManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneBookIOSManager : CHLogger <CHPhoneBookManagerProtocol>
{
    char _callerIdIsEmail;
    int _recordId;
    int _multiValueId;
    void * _record;
    unsigned int _recordIsSuggested;
}

@property char callerIdIsEmail;
@property int recordId;
@property int multiValueId;
@property (nonatomic) void * record;
@property unsigned int recordIsSuggested;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (CHPhoneBookIOSManager *)init;
- (void)releaseCachedRecord;
- (NSObject *)getRecordId:(NSObject *)arg0 andISOCountryCode:(id)arg1 isEmail:(char)arg2;
- (NSObject *)getCallerIdPropertyMultiValueId:(NSObject *)arg0 andISOCountryCode:(id)arg1 isEmail:(char)arg2;
- (void *)getABRecordRef;
- (void)setABRecordId:(NSObject *)arg0;
- (void)setABRecordRef:(void *)arg0;
- (void)setABRecordMultiValueId:(NSObject *)arg0;
- (char)isABContactASuggestion;
- (NSObject *)getPersonsNameForRecordId:(NSObject *)arg0;
- (NSObject *)getLocalizedCallerIdLabelForRecordId:(NSObject *)arg0;
- (void)setMultiValueId:(int)arg0;
- (void)setCallerIdIsEmail:(char)arg0;
- (void)fetchABRecord:(NSObject *)arg0 andISOCountryCode:(id)arg1 isEmail:(char)arg2;
- (int)multiValueId;
- (char)callerIdIsEmail;
- (unsigned int)recordIsSuggested;
- (void)setRecordIsSuggested:(unsigned int)arg0;
- (void *)record;
- (void)setRecord:(void *)arg0;
- (void)setRecordId:(int)arg0;
- (int)recordId;

@end

/* Runtime dump - CoreDAVErrorItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVErrorItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren * _numberOfMatchesWithinLimits;
    CoreDAVItemWithNoChildren * _validSyncToken;
    CoreDAVItemWithNoChildren * _noUIDConflict;
    CoreDAVItemWithNoChildren * _validAddressData;
    CoreDAVItemWithNoChildren * _maxResourceSize;
    CoreDAVItemWithNoChildren * _uid;
    CoreDAVItemWithNoChildren * _ctagOkay;
    CoreDAVItemWithNoChildren * _maxImageSize;
    CoreDAVItemWithNoChildren * _invalidImageType;
    CoreDAVItemWithNoChildren * _imageError;
    CoreDAVItemWithNoChildren * _maxAttendees;
    CoreDAVItemWithNoChildren * _quotaExceeded;
    CoreDAVItemWithNoChildren * _maxResources;
    CoreDAVItemWithNoChildren * _validTimezone;
    CoreDAVLeafItem * _status;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren * numberOfMatchesWithinLimits;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * validSyncToken;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * noUIDConflict;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * validAddressData;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * maxResourceSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * uid;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * ctagOkay;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * maxImageSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * invalidImageType;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * imageError;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * maxAttendees;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * quotaExceeded;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * maxResources;
@property (retain, nonatomic) CoreDAVItemWithNoChildren * validTimezone;
@property (retain, nonatomic) CoreDAVLeafItem * status;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVErrorItem *)init;
- (NSString *)description;
- (CoreDAVItemWithNoChildren *)uid;
- (CoreDAVLeafItem *)status;
- (void)setStatus:(CoreDAVLeafItem *)arg0;
- (CoreDAVItemWithNoChildren *)maxResourceSize;
- (CoreDAVItemWithNoChildren *)maxImageSize;
- (void)setMaxResourceSize:(CoreDAVItemWithNoChildren *)arg0;
- (void)setMaxImageSize:(CoreDAVItemWithNoChildren *)arg0;
- (CoreDAVItemWithNoChildren *)numberOfMatchesWithinLimits;
- (CoreDAVItemWithNoChildren *)validSyncToken;
- (CoreDAVItemWithNoChildren *)noUIDConflict;
- (CoreDAVItemWithNoChildren *)validAddressData;
- (CoreDAVItemWithNoChildren *)ctagOkay;
- (CoreDAVItemWithNoChildren *)invalidImageType;
- (CoreDAVItemWithNoChildren *)imageError;
- (CoreDAVItemWithNoChildren *)maxAttendees;
- (CoreDAVItemWithNoChildren *)quotaExceeded;
- (CoreDAVItemWithNoChildren *)maxResources;
- (void)setNumberOfMatchesWithinLimits:(CoreDAVItemWithNoChildren *)arg0;
- (void)setValidSyncToken:(CoreDAVItemWithNoChildren *)arg0;
- (void)setNoUIDConflict:(CoreDAVItemWithNoChildren *)arg0;
- (void)setValidAddressData:(CoreDAVItemWithNoChildren *)arg0;
- (void)setCtagOkay:(CoreDAVItemWithNoChildren *)arg0;
- (void)setInvalidImageType:(CoreDAVItemWithNoChildren *)arg0;
- (void)setImageError:(CoreDAVItemWithNoChildren *)arg0;
- (void)setMaxAttendees:(CoreDAVItemWithNoChildren *)arg0;
- (void)setQuotaExceeded:(CoreDAVItemWithNoChildren *)arg0;
- (void)setMaxResources:(CoreDAVItemWithNoChildren *)arg0;
- (void)setValidTimezone:(CoreDAVItemWithNoChildren *)arg0;
- (CoreDAVItemWithNoChildren *)validTimezone;
- (void)setUid:(CoreDAVItemWithNoChildren *)arg0;

@end

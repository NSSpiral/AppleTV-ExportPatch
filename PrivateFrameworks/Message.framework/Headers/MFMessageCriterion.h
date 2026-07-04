/* Runtime dump - MFMessageCriterion
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageCriterion : NSObject
{
    NSString * _uniqueId;
    NSString * _criterionIdentifier;
    NSString * _expression;
    int _qualifier;
    NSArray * _criteria;
    int _dateUnitType;
    NSString * _name;
    id _allCriteriaMustBeSatisfied;
    id _dateIsRelative;
    id _includeRelatedMessages;
    int _type;
    NSArray * _requiredHeaders;
    char _useFlaggedForUnreadCount;
    char _expressionIsSanitized;
    NSIndexSet * _libraryIdentifiers;
}

@property (retain, nonatomic) NSIndexSet * libraryIdentifiers;
@property (nonatomic) char useFlaggedForUnreadCount;
@property (nonatomic) char includeRelatedMessages;
@property (nonatomic) char expressionIsSanitized;

+ (NSURL *)criterionForMailboxURL:(NSURL *)arg0;
+ (MFMessageCriterion *)messageIsDeletedCriterion:(char)arg0;
+ (MFMessageCriterion *)messageIsServerSearchResultCriterion:(char)arg0;
+ (MFMessageCriterion *)andCompoundCriterionWithCriteria:(NSArray *)arg0;
+ (NSArray *)criteriaFromDefaultsArray:(NSArray *)arg0 removingRecognizedKeys:(char)arg1;
+ (int)criterionTypeForString:(NSString *)arg0;
+ (NSObject *)stringForCriterionType:(int)arg0;
+ (NSArray *)criteriaFromDefaultsArray:(NSArray *)arg0;
+ (MFMessageCriterion *)defaultsArrayFromCriteria:(id)arg0;
+ (void)_updateAddressComments:(id)arg0;
+ (MFMessageCriterion *)VIPSenderMessageCriterion;
+ (MFMessageCriterion *)ThreadNotifyMessageCriterion;
+ (MFMessageCriterion *)flaggedMessageCriterion;
+ (MFMessageCriterion *)unreadMessageCriterion;
+ (MFMessageCriterion *)includesMeCriterion;
+ (MFMessageCriterion *)hasAttachmentsCriterion;
+ (MFMessageCriterion *)todayMessageCriterion;
+ (MFMessageCriterion *)notCriterionWithCriterion:(MFMessageCriterion *)arg0;
+ (MFMessageCriterion *)orCompoundCriterionWithCriteria:(NSArray *)arg0;

- (NSString *)expression;
- (NSArray *)criteria;
- (void)setCriteria:(NSArray *)arg0;
- (void)dealloc;
- (MFMessageCriterion *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MFMessageCriterion *)initWithDictionary:(NSDictionary *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSDictionary *)dictionaryRepresentation;
- (int)criterionType;
- (char)allCriteriaMustBeSatisfied;
- (MFMessageCriterion *)initWithType:(int)arg0 qualifier:(int)arg1 expression:(NSString *)arg2;
- (void)setCriterionIdentifier:(NSString *)arg0;
- (void)setAllCriteriaMustBeSatisfied:(char)arg0;
- (MFMessageCriterion *)initWithDictionary:(NSDictionary *)arg0 andRemoveRecognizedKeysIfMutable:(char)arg1;
- (void)setCriterionType:(int)arg0;
- (void)setQualifier:(int)arg0;
- (MFMessageCriterion *)initWithCriterion:(MFMessageCriterion *)arg0 expression:(NSString *)arg1;
- (int)messageRuleQualifierForString:(NSString *)arg0;
- (NSString *)criterionIdentifier;
- (int)qualifier;
- (NSString *)descriptionWithDepth:(unsigned int)arg0;
- (NSString *)_qualifierString;
- (NSString *)stringForMessageRuleQualifier:(int)arg0;
- (char)doesMessageSatisfyCriterion:(id)arg0;
- (id)_headersRequiredForEvaluation;
- (char)_evaluateCompoundCriterion:(id)arg0;
- (char)_evaluateFlagCriterion:(id)arg0;
- (char)_evaluateAddressBookCriterion:(id)arg0;
- (char)_evaluateHeaderCriterion:(id)arg0;
- (char)_evaluateSenderHeaderCriterion:(id)arg0;
- (char)_evaluateAccountCriterion:(id)arg0;
- (char)_evaluateDateCriterion:(id)arg0;
- (char)_evaluateAddressHistoryCriterion:(id)arg0;
- (char)_evaluateFullNameCriterion:(id)arg0;
- (char)_evaluatePriorityIsNormalCriterion:(id)arg0;
- (char)_evaluatePriorityIsHighCriterion:(id)arg0;
- (char)_evaluatePriorityIsLowCriterion:(id)arg0;
- (char)_evaluateAttachmentCriterion:(id)arg0;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (void)setUseFlaggedForUnreadCount:(char)arg0;
- (void)setDateUnits:(int)arg0;
- (void)setDateIsRelative:(char)arg0;
- (char)_evaluateIsDigitallySignedCriterion:(id)arg0;
- (char)_evaluateIsEncryptedCriterion:(id)arg0;
- (int)dateUnits;
- (char)dateIsRelative;
- (id)emailAddressesForGroupCriterion;
- (char)useFlaggedForUnreadCount;
- (char)includeRelatedMessages;
- (void)setIncludeRelatedMessages:(char)arg0;
- (char)expressionIsSanitized;
- (void)setExpressionIsSanitized:(char)arg0;
- (id)fixOnce;
- (id)_criterionForSQL;
- (char)isFullTextSearchableCriterion;
- (NSObject *)_evaluateFTSCriterionWithIndex:(NSObject *)arg0 mailboxIDs:(id)arg1;
- (NSObject *)_resolveWithIndex:(NSObject *)arg0 mailboxIDs:(id)arg1;
- (id)_collapsedMessageNumberCriterion:(id)arg0 allMustBeSatisfied:(char)arg1 collapsedIndexes:(id *)arg2;
- (char)hasLibraryIDCriterion;
- (NSString *)SQLExpressionWithContext:(struct ? *)arg0 depth:(unsigned int)arg1;
- (unsigned int)bestBaseTable;
- (void)_addCriteriaSatisfyingPredicate:(/* block */ id *)arg0 toCollector:(_IMPingStatisticsCollector *)arg1;
- (char)includesCriterionSatisfyingPredicate:(/* block */ id *)arg0 restrictive:(char)arg1;
- (NSString *)criterionByApplyingTransform:(NSObject *)arg0;
- (NSPredicate *)criteriaSatisfyingPredicate:(/* block */ id *)arg0;
- (id)criterionForSQL;
- (id)SQLExpressionWithTables:(unsigned int *)arg0 baseTable:(unsigned int)arg1 protectedDataAvailable:(char)arg2 contentIndex:(MFLibraryContentIndex *)arg3 mailboxIDs:(id)arg4;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (char)hasNonFullTextSearchableCriterion;
- (NSIndexSet *)libraryIdentifiers;
- (void)setLibraryIdentifiers:(NSIndexSet *)arg0;
- (void)setExpression:(NSString *)arg0;

@end

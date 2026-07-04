/* Runtime dump - CNVCardActivityAlertQuotingSerializationStrategy
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface CNVCardActivityAlertQuotingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)strategyWouldAlterString:(NSString *)arg0;
+ (NSRegularExpression *)regex;
+ (NSString *)serializeString:(NSString *)arg0;

@end

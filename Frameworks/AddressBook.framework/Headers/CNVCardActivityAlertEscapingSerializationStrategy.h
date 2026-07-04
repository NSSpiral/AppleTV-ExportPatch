/* Runtime dump - CNVCardActivityAlertEscapingSerializationStrategy
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface CNVCardActivityAlertEscapingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)strategyWouldAlterString:(NSString *)arg0;
+ (NSRegularExpression *)regex;
+ (NSObject *)charactersToTriggerStrategy;
+ (NSString *)serializeString:(NSString *)arg0;

@end

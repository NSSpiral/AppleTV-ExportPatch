/* Runtime dump - ACDManagedDataclass
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDManagedDataclass : NSManagedObject

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSSet * provisionedAccounts;
@property (retain, nonatomic) NSSet * syncableTypes;
@property (retain, nonatomic) NSSet * supportedTypes;
@property (retain, nonatomic) NSSet * enabledAccounts;

@end

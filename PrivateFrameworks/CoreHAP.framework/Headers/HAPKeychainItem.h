/* Runtime dump - HAPKeychainItem
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPKeychainItem : NSObject
{
    char _syncable;
    NSString * _accessGroup;
    NSNumber * _type;
    NSString * _label;
    NSString * _itemDescription;
    NSString * _account;
    NSData * _valueData;
    void * _platformReference;
    NSData * _genericData;
}

@property (retain, nonatomic) NSString * accessGroup;
@property (retain, nonatomic) NSNumber * type;
@property (retain, nonatomic) NSString * label;
@property (retain, nonatomic) NSString * itemDescription;
@property (retain, nonatomic) NSString * account;
@property (retain, nonatomic) NSData * valueData;
@property (nonatomic) char syncable;
@property (nonatomic) void * platformReference;
@property (retain, nonatomic) NSData * genericData;

- (void)dealloc;
- (void)setType:(NSNumber *)arg0;
- (NSNumber *)type;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (HAPKeychainItem *)initWithQueryResult:(struct __CFDictionary *)arg0 shouldIncludeData:(char)arg1;
- (NSString *)accessGroup;
- (void)setAccessGroup:(NSString *)arg0;
- (NSString *)itemDescription;
- (void)setItemDescription:(NSString *)arg0;
- (NSString *)account;
- (void)setAccount:(NSString *)arg0;
- (NSData *)valueData;
- (void)setValueData:(NSData *)arg0;
- (char)isSyncable;
- (void)setSyncable:(char)arg0;
- (void *)platformReference;
- (void)setPlatformReference:(void *)arg0;
- (NSData *)genericData;
- (void)setGenericData:(NSData *)arg0;

@end

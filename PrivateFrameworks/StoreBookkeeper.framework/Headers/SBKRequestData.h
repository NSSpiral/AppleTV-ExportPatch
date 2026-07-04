/* Runtime dump - SBKRequestData
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKRequestData : NSObject
{
    SBKTransaction * _transaction;
}

@property (retain) SBKTransaction * transaction;

+ (NSObject *)propertyListBodyWithTransaction:(SBKTransaction *)arg0;

- (void)setTransaction:(SBKTransaction *)arg0;
- (void).cxx_destruct;
- (SBKRequestData *)initWithTransaction:(SBKTransaction *)arg0;
- (SBKTransaction *)transaction;
- (NSArray *)serializableRequestBodyPropertyList;

@end

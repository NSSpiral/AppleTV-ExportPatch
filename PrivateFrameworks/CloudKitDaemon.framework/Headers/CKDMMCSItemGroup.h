/* Runtime dump - CKDMMCSItemGroup
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroup : NSObject
{
    NSMutableArray * _items;
    char _complete;
    NSError * _error;
    NSArray * _tuple;
}

@property (retain, nonatomic) NSError * error;
@property (readonly, nonatomic) NSArray * items;
@property (retain, nonatomic) NSArray * tuple;
@property (readonly, nonatomic) NSURL * contentBaseURL;
@property (readonly, nonatomic) NSString * owner;
@property (readonly, nonatomic) NSString * requestor;
@property (readonly, nonatomic) char useAuthRequests;
@property (nonatomic) char complete;

+ (NSObject *)tupleForItem:(NSObject *)arg0;

- (NSString *)description;
- (NSArray *)items;
- (void)addItem:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setComplete:(char)arg0;
- (char)complete;
- (NSError *)error;
- (NSString *)owner;
- (NSString *)CKPropertiesDescription;
- (char)useAuthRequests;
- (NSURL *)contentBaseURL;
- (NSString *)requestor;
- (CKDMMCSItemGroup *)initWithTuple:(NSArray *)arg0;
- (NSArray *)tuple;
- (void)setTuple:(NSArray *)arg0;
- (void)setError:(NSError *)arg0;

@end

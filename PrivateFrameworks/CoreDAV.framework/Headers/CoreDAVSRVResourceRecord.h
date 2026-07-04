/* Runtime dump - CoreDAVSRVResourceRecord
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSRVResourceRecord : NSObject
{
    NSString * _serviceString;
    NSNumber * _priority;
    NSNumber * _weight;
    NSNumber * _port;
    NSString * _target;
}

@property (retain, nonatomic) NSString * serviceString;
@property (retain, nonatomic) NSNumber * priority;
@property (retain, nonatomic) NSNumber * weight;
@property (retain, nonatomic) NSNumber * port;
@property (retain, nonatomic) NSString * target;

- (void)dealloc;
- (NSString *)description;
- (void)setTarget:(NSString *)arg0;
- (NSString *)target;
- (void)setPriority:(NSNumber *)arg0;
- (NSNumber *)priority;
- (NSNumber *)port;
- (NSNumber *)weight;
- (void)setWeight:(NSNumber *)arg0;
- (NSString *)serviceString;
- (void)setServiceString:(NSString *)arg0;
- (void)setPort:(NSNumber *)arg0;

@end

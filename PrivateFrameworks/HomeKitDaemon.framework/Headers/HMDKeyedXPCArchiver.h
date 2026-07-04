/* Runtime dump - HMDKeyedXPCArchiver
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyedXPCArchiver : NSObject
{
    NSKeyedArchiver * _archiver;
}

@property (retain, nonatomic) NSKeyedArchiver * archiver;

- (void)dealloc;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)finishEncoding;
- (void).cxx_destruct;
- (NSKeyedArchiver *)archiver;
- (void)setArchiver:(NSKeyedArchiver *)arg0;
- (HMDKeyedXPCArchiver *)initForWritingWithMutableData:(NSMutableData *)arg0 message:(NSString *)arg1;
- (void)_configure;

@end

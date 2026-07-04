/* Runtime dump - BRCPackageChecksummer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageChecksummer : NSObject
{
    BRCChecksummingOutputStream * _stream;
}

@property (readonly, nonatomic) NSData * signature;

- (BRCPackageChecksummer *)init;
- (void)done;
- (void)addItem:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSData *)signature;

@end

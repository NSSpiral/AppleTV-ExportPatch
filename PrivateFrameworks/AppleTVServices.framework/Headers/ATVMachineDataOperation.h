/* Runtime dump - ATVMachineDataOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMachineDataOperation : ISOperation
{
    NSHTTPURLResponse * _response;
}

@property (retain, nonatomic) NSHTTPURLResponse * response;

- (void)run;
- (NSHTTPURLResponse *)response;
- (void).cxx_destruct;
- (ATVMachineDataOperation *)initWithURLResponse:(NSString *)arg0;
- (void)setResponse:(NSHTTPURLResponse *)arg0;

@end

//
//  ViewController.h
//  KMMusicPlayer
//
//  Created by Student P_07 on 03/11/16.
//  Copyright © 2016 Karishma Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController
{
    //    AVPlayer *player;   //movie play
    
    AVAudioPlayer *audioPlayer; //player for playing audio (only sounds)
    
    BOOL isPlaying;
    NSTimer *timer;
    
}
@property (strong, nonatomic) IBOutlet UIImageView *imageViewArtWork;

@property (weak, nonatomic) IBOutlet UISlider *sliderDuration;

@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)actionPlay:(id)sender;

- (IBAction)actionStop:(id)sender;


@end


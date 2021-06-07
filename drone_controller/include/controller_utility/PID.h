/*
 * Copyright 2020 Kangyao Huang, ACSE, The University of Sheffield, UK
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PID_H
#define PID_H

namespace drone_control{

class PID
{   
    public:

    PID();
    ~PID();

    void SetGainParameters(double params[5]);
    void ReSet();
    double ComputeCorrection(double _cmd, double _pos, double _loopTime);
    double ComputeCorrectionLimit(double _cmd, double _pos, double _loopTime);

    private:

    double G;
    double Kp, Kd, Ki, Ki_max= 0;
    double speedCmd = 0;

    double posErrorPrev = 0;
    double posIntegrator = 0;

    double error = 0;
    double errorPrev = 0;
    double integrator = 0;

};


}

#endif